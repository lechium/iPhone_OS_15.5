//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HeartRhythmUI/HRFeatureRegulatoryPanelDisplayable-Protocol.h>

@class NSAttributedString, NSString;

@interface HRFeatureRegulatoryVersionItem : NSObject <HRFeatureRegulatoryPanelDisplayable>
{
    NSString *_productName;	// 8 = 0x8
    long long _deviceType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002ab3b
@property(readonly, nonatomic) long long cellAccessoryType;
@property(readonly, nonatomic) _Bool isInteractive;
- (id)shortVersionNumberFromString:(id)arg1;	// IMP=0x000000000002aaec
@property(readonly, copy, nonatomic) NSAttributedString *valueString;
@property(readonly, copy, nonatomic) NSAttributedString *titleString;
- (id)initWithProductName:(id)arg1 deviceType:(long long)arg2;	// IMP=0x000000000002a557

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

