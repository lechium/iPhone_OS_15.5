//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface OADHyperlink : NSObject
{
    NSURL *mTargetLocation;	// 8 = 0x8
    int mTargetMode;	// 16 = 0x10
    NSString *mTargetFrame;	// 24 = 0x18
    NSString *mAction;	// 32 = 0x20
    NSString *mTooltip;	// 40 = 0x28
    NSString *mInvalidUrl;	// 48 = 0x30
    _Bool mDoEndSound;	// 56 = 0x38
    _Bool mIsVisited;	// 57 = 0x39
    _Bool mDoAddToHistory;	// 58 = 0x3a
}

- (void).cxx_destruct;	// IMP=0x000000000031abbe
@property(nonatomic) _Bool doAddToHistory; // @synthesize doAddToHistory=mDoAddToHistory;
@property(nonatomic) _Bool isVisited; // @synthesize isVisited=mIsVisited;
@property(nonatomic) _Bool doEndSound; // @synthesize doEndSound=mDoEndSound;
- (id)description;	// IMP=0x000000000031ab65
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fb598
- (unsigned long long)hash;	// IMP=0x000000000031ab07
- (void)setInvalidUrl:(id)arg1;	// IMP=0x00000000001652fc
- (id)invalidUrl;	// IMP=0x000000000031aaf9
- (void)setTooltip:(id)arg1;	// IMP=0x00000000001652eb
- (id)tooltip;	// IMP=0x000000000031aaeb
- (void)setAction:(id)arg1;	// IMP=0x00000000001652da
- (id)action;	// IMP=0x00000000001dce0a
- (void)setTargetFrame:(id)arg1;	// IMP=0x00000000001652c9
- (id)targetFrame;	// IMP=0x000000000031aadd
- (void)setTargetMode:(int)arg1;	// IMP=0x00000000001652c0
- (int)targetMode;	// IMP=0x000000000031aad4
- (void)setTargetLocation:(id)arg1;	// IMP=0x00000000001652af
- (id)targetLocation;	// IMP=0x000000000024b406
- (id)init;	// IMP=0x000000000016526a

@end

