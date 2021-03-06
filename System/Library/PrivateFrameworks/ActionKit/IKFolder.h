//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IKFolder : NSObject
{
    long long _folderID;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    _Bool _syncToMobile;	// 24 = 0x18
    unsigned long long _position;	// 32 = 0x20
}

+ (id)folderWithFolderID:(long long)arg1;	// IMP=0x00000000002431ca
+ (id)archiveFolder;	// IMP=0x00000000002431b1
+ (id)starredFolder;	// IMP=0x0000000000243198
+ (id)unreadFolder;	// IMP=0x000000000024317f
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) _Bool syncToMobile; // @synthesize syncToMobile=_syncToMobile;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long folderID; // @synthesize folderID=_folderID;
- (void)dealloc;	// IMP=0x00000000002430f1
- (id)description;	// IMP=0x0000000000243075
- (id)initWithFolderID:(long long)arg1;	// IMP=0x000000000024302a
- (id)init;	// IMP=0x000000000024300e

@end

