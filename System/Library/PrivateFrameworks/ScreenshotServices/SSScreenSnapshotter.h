//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIScreen;

@interface SSScreenSnapshotter : NSObject
{
    UIScreen *_screen;	// 8 = 0x8
}

+ (id)snapshotterForScreen:(id)arg1;	// IMP=0x00000000000088f1
- (void).cxx_destruct;	// IMP=0x00000000000089e5
@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
- (id)takeScreenshot;	// IMP=0x00000000000089d3
- (id)initWithScreen:(id)arg1;	// IMP=0x000000000000897e

@end

