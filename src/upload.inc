<?php

return [

    /* 上传附件配置 */
    'attachment'=>[
        'path' => __APP__.'uploads/file/',
        'url'  => 'http://chui.ol.cx/uploads/file/',
        'field' => 'upfile',/* 提交的文件表单名称 */
        'name' => '{yyyy}{mm}{dd}/{time}{rand:6}',/* 上传保存路径,可以自定义保存路径和文件名格式 */
        'urlPrefix' => '',/* 文件访问路径前缀 */
        'max' => 51200000,/* 上传大小限制，单位B，默认50MB */
        'allow' => [/* 上传文件格式显示 */
            ".png", ".jpg", ".jpeg", ".gif", ".bmp",
            ".flv", ".swf", ".mkv", ".avi", ".rm", ".rmvb", ".mpeg", ".mpg",
            ".ogg", ".ogv", ".mov", ".wmv", ".mp4", ".webm", ".mp3", ".wav", ".mid",
            ".rar", ".zip", ".tar", ".gz", ".7z", ".bz2", ".cab", ".iso",
            ".doc", ".docx", ".xls", ".xlsx", ".ppt", ".pptx", ".pdf", ".txt", ".md", ".xml"
        ]
    ],

    /* 上传图片配置项 */
    'image' => [
        'path' => __APP__.'uploads/image/',
        'url'  => 'http://chui.ol.cx/uploads/image/',
        'field' => 'upfile',/* 提交的图片表单名称 */
        'max' => 20971520,/* 上传大小限制，单位B */
        'allow' => [".png", ".jpg", ".jpeg", ".gif", ".bmp"],/* 上传图片格式显示 */
        'compressEnable' => false,/* 是否压缩图片,默认是true */
        'name' => '{yyyy}{mm}{dd}/{time}{rand:6}',/* 上传保存路径,可以自定义保存路径和文件名格式 */
        'compressBorder' => 1600,/* 图片压缩最长边限制 */
        'insertAlign' => 'none',/* 插入的图片浮动方式 */
        'urlPrefix' => ''/* 图片访问路径前缀 */
    ],

    /* 上传视频配置 */
    'video' => [
        'path' => __APP__.'uploads/video/',
        'url'  => 'http://chui.ol.cx/uploads/video/',
        'field' => 'upfile',/* 提交的视频表单名称 */
        'pathFormat' => '{yyyy}{mm}{dd}/{time}{rand:6}',/* 上传保存路径,可以自定义保存路径和文件名格式 */
        'urlPrefix' => '',/* 视频访问路径前缀 */
        'maxSize' => 102400000,/* 上传大小限制，单位B，默认100MB */
        'allowFiles' => [/* 上传视频格式显示 */
            ".flv", ".swf", ".mkv", ".avi", ".rm", ".rmvb", ".mpeg", ".mpg",
            ".ogg", ".ogv", ".mov", ".wmv", ".mp4", ".webm", ".mp3", ".wav", ".mid"
        ],
    ],


    /* 头像，图标等不保存数据库，且唯一文件的上传配置 */
    'storage' => [
        'path' => __APP__.'uploads/',
        'url'  => 'http://chui.ol.cx/uploads/',
        'field' => 'upfile',/* 提交的图片表单名称 */
        'max' => 20971520,/* 上传大小限制，单位B */
        'allow' => [".png", ".jpg", ".jpeg", ".gif", ".bmp"],/* 上传图片格式显示 */
        'name' => '{yyyy}{mm}{dd}{time}{rand:6}',/* 上传保存路径,可以自定义保存路径和文件名格式 */
    ],


    /* 抓取远程图片配置 */
    'catcher'=>[
        'localDomain' => [
            "127.0.0.1", "localhost", "img.baidu.com"
        ],
        'field' => 'source',/* 提交的图片列表表单名称 */
        'pathFormat' => 'image/{yyyy}{mm}{dd}/{time}{rand:6}',/* 上传保存路径,可以自定义保存路径和文件名格式 */
        'urlPrefix' => '',/* 图片访问路径前缀 */
        'maxSize' => 2048000,/* 上传大小限制，单位B */
        'allowFiles' => [".png", ".jpg", ".jpeg", ".gif", ".bmp"],/* 抓取图片格式显示 */
    ],

    /* 涂鸦图片上传配置项 */
    'scrawl'=> [
        'path' => __APP__.'uploads/test/',
        'url'  => 'http://chui.ol.cx/uploads/test/',
        'fieldName' => 'upfile',/* 提交的图片表单名称 */
        'pathFormat' => 'image/{yyyy}{mm}{dd}/{time}{rand:6}',/* 上传保存路径,可以自定义保存路径和文件名格式 */
        'maxSize' => 2048000,/* 上传大小限制，单位B */
        'urlPrefix' => '',/* 图片访问路径前缀 */
        'insertAlign' => 'none',/* 插入的图片浮动方式 */
    ],

    /* 截图工具上传 */
    'snapscreen'=>[
        'pathFormat' => 'image/{yyyy}{mm}{dd}/{time}{rand:6}',/* 上传保存路径,可以自定义保存路径和文件名格式 */
        'urlPrefix' => '',/* 图片访问路径前缀 */
        'insertAlign' => 'none',
    ],





    /* 列出指定目录下的图片 */
    'listImage' => [
        'path' => 'image/'.date('Ymd').'/',/* 指定要列出图片的目录 */
        'size' => 20,/* 每次列出文件数量 */
        'urlPrefix' => '',/* 图片访问路径前缀 */
        'insertAlign' => 'none',/* 插入的图片浮动方式 */
        'allowFiles' => [/* 列出的文件类型 */
            ".png", ".jpg", ".jpeg", ".gif", ".bmp"
        ],
    ],

    /* 列出指定目录下的文件 */
    'listFile'=> [
        'path' => 'file/'.date('Ymd').'/',/* 指定要列出文件的目录 */
        'urlPrefix' =>'',/* 文件访问路径前缀 */
        'size' => 20,/* 每次列出文件数量 */
        'allowFiles' => [/* 列出的文件类型 */
            ".png", ".jpg", ".jpeg", ".gif", ".bmp",
            ".flv", ".swf", ".mkv", ".avi", ".rm", ".rmvb", ".mpeg", ".mpg",
            ".ogg", ".ogv", ".mov", ".wmv", ".mp4", ".webm", ".mp3", ".wav", ".mid",
            ".rar", ".zip", ".tar", ".gz", ".7z", ".bz2", ".cab", ".iso",
            ".doc", ".docx", ".xls", ".xlsx", ".ppt", ".pptx", ".pdf", ".txt", ".md", ".xml"
        ]
    ]
];