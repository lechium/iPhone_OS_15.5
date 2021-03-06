//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreChart/CCVegaMarkDefInterface-Protocol.h>

@class CCVegaCARenderer;

@interface CCVegaMarkDef : NSObject <CCVegaMarkDefInterface>
{
    CCVegaCARenderer *delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000e082
@property __weak CCVegaCARenderer *delegate; // @synthesize delegate;
- (struct CGRect)accessibilityFrameForMark:(id)arg1 layer:(id)arg2;	// IMP=0x000000000000e025
- (id)updateMultiMark:(id)arg1;	// IMP=0x000000000000dff6
- (id)enterMultiMark:(id)arg1;	// IMP=0x000000000000dfc7
- (id)updateMark:(id)arg1;	// IMP=0x000000000000df98
- (id)enterMark:(id)arg1;	// IMP=0x000000000000df69
- (_Bool)isMultiItemMark;	// IMP=0x000000000000df61
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000000def3

@end

