<?php
/*
 * This file is part of the NB Framework package.
 *
 * Copyright (c) 2018 https://nb.cx All rights reserved.
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */
namespace ol\sblog\editor;

use nb\Request;
use util\Admin;
use util\Uploader;

/**
 * Upload
 *
 * @package controller\admin
 * @link https://nb.cx
 * @author: collin <collin@nb.cx>
 * @date: 2018/8/10
 */
class Upload extends Admin {

    public function reader() {
        include __DIR__.DS.'editor.html';
    }

    public function index() {
        $form = Request::form();
        $action = $form['action'];

        switch ($action) {
            case 'config':
                $result = load('ueditor');
                break;
            /* 上传图片 */
            case 'uploadimage':
                $upload = new Uploader([
                    'path' => __APP__.'public/uploads/image/',
                    'url'  => 'http://sblog.ol.cx/public/uploads/image/',
                    'field' => 'upfile',/* 提交的图片表单名称 */
                    'max' => 20971520,/* 上传大小限制，单位B */
                    'allow' => [".png", ".jpg", ".jpeg", ".gif", ".bmp"],/* 上传图片格式显示 */
                    'compressEnable' => false,/* 是否压缩图片,默认是true */
                    'name' => '{yyyy}{mm}{dd}/{time}{rand:6}',/* 上传保存路径,可以自定义保存路径和文件名格式 */
                    'compressBorder' => 1600,/* 图片压缩最长边限制 */
                    'insertAlign' => 'none',/* 插入的图片浮动方式 */
                    'urlPrefix' => ''/* 图片访问路径前缀 */
                ]);
                $result = $upload->upload(Request::driver()->files['upfile']);
                break;
            /* 上传涂鸦 */
            case 'uploadscrawl':
                $upload = new Uploader();
                $result = $upload->crawler();
                break;
            /* 上传视频 */
            case 'uploadvideo':
                $upload = new Uploader();
                $result = $upload->video();
                break;
            /* 上传文件 */
            case 'uploadfile':
                $upload = new Uploader();
                $result = $upload->attachment();
                break;
            /* 列出图片 */
            case 'listimage':
                $upload = new Uploader();
                $result = include("upload_list.php");
                break;
            /* 列出文件 */
            case 'listfile':
                $upload = new Uploader();
                $result = include("upload_list.php");
                break;
            /* 抓取远程文件 */
            case 'catchimage':
                $upload = new Uploader();
                $result = include("upload_crawler.php");
                break;

            default:
                $result = [
                    'state' => '请求地址出错'
                ];
                break;
        }
        echo json_encode($result);
    }

}