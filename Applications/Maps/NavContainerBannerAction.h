//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NavContainerBannerAction : NSObject
{
    _Bool _hidden;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    CDUnknownBlockType _actionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000afa87c
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000afa77e
- (id)description;	// IMP=0x0010000000afa6ba

@end
