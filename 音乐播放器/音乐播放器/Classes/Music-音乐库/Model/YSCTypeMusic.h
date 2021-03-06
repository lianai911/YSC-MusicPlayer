//
//  YSCTypeMusic.h
//  音乐播放器
//
//  Created by YangLunlong on 16/5/16.
//  Copyright © 2016年 lianai911. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BmobSDK/Bmob.h>

@interface YSCTypeMusic : NSObject

/** 歌曲名称 */
@property (nonatomic, copy) NSString *title;

/** 歌曲歌手 */
@property (nonatomic, copy) NSString *singer;

/** 歌曲图片文件url */
@property (nonatomic, copy) NSString *songPicFile;

/** 歌曲文件url */
@property (nonatomic, copy) NSString *songFile;

/** 歌词文件url */
@property (nonatomic, copy) NSString *lyricFile;

/** 歌词文件url */
@property (nonatomic, strong) BmobFile *lyric;

/** 歌曲id */
@property (nonatomic, copy) NSString *songId;

//@property (nonatomic, copy) NSString *singer;  ---singer
//@property (nonatomic, copy) NSString *singerIcon;  ---songPic
//@property (nonatomic, copy) NSString *icon;

/** 是否喜欢该歌曲 */
@property (nonatomic, assign) BOOL isLike;

@end
