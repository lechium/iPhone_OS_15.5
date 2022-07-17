//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface CAMAnalyticsVisionSession
{
    _Bool __textDetectionEnabled;	// 8 = 0x8
    _Bool __MRCDetectionEnabled;	// 9 = 0x9
    double __startTime;	// 16 = 0x10
    unsigned long long __textButtonPressCount;	// 24 = 0x18
    unsigned long long __qrButtonPressCount;	// 32 = 0x20
    unsigned long long __appClipButtonPressCount;	// 40 = 0x28
    unsigned long long __qrPillPressCount;	// 48 = 0x30
    unsigned long long __appClipPillPressCount;	// 56 = 0x38
    unsigned long long __maxTextRegionCount;	// 64 = 0x40
    unsigned long long __maxQRCodeCount;	// 72 = 0x48
    unsigned long long __maxAppClipCodeCount;	// 80 = 0x50
    NSMutableSet *__pressedQRTypes;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000091849
@property(retain, nonatomic, setter=_setPressedMRCTypes:) NSMutableSet *_pressedQRTypes; // @synthesize _pressedQRTypes=__pressedQRTypes;
@property(nonatomic, setter=_setMaxAppClipCodeCount:) unsigned long long _maxAppClipCodeCount; // @synthesize _maxAppClipCodeCount=__maxAppClipCodeCount;
@property(nonatomic, setter=_setMaxQRCodeCount:) unsigned long long _maxQRCodeCount; // @synthesize _maxQRCodeCount=__maxQRCodeCount;
@property(nonatomic, setter=_setMaxTextRegionCount:) unsigned long long _maxTextRegionCount; // @synthesize _maxTextRegionCount=__maxTextRegionCount;
@property(nonatomic, setter=_setAppClipPillPressCount:) unsigned long long _appClipPillPressCount; // @synthesize _appClipPillPressCount=__appClipPillPressCount;
@property(nonatomic, setter=_setQRPillPressCount:) unsigned long long _qrPillPressCount; // @synthesize _qrPillPressCount=__qrPillPressCount;
@property(nonatomic, setter=_setAppClipButtonPressCount:) unsigned long long _appClipButtonPressCount; // @synthesize _appClipButtonPressCount=__appClipButtonPressCount;
@property(nonatomic, setter=_setQRButtonPressCount:) unsigned long long _qrButtonPressCount; // @synthesize _qrButtonPressCount=__qrButtonPressCount;
@property(nonatomic, setter=_setTextButtonPressCount:) unsigned long long _textButtonPressCount; // @synthesize _textButtonPressCount=__textButtonPressCount;
@property(nonatomic, setter=_setStartTime:) double _startTime; // @synthesize _startTime=__startTime;
@property(readonly, nonatomic, getter=_isMRCDetectionEnabled) _Bool _MRCDetectionEnabled; // @synthesize _MRCDetectionEnabled=__MRCDetectionEnabled;
@property(readonly, nonatomic, getter=_isTextDetectionEnabled) _Bool _textDetectionEnabled; // @synthesize _textDetectionEnabled=__textDetectionEnabled;
- (id)_analyticsValueForQRType:(long long)arg1;	// IMP=0x00000000000915e6
- (id)_analyticsValueForQRTypes:(id)arg1;	// IMP=0x0000000000091393
- (void)_countMRCTypeForAction:(id)arg1;	// IMP=0x00000000000912b6
- (long long)_bucketedCount:(long long)arg1;	// IMP=0x0000000000091272
- (void)publish;	// IMP=0x0000000000090baa
- (void)countObservedSignficantMRCs:(id)arg1;	// IMP=0x000000000009094f
- (void)countObservedSignficantTextRegionCount:(unsigned long long)arg1;	// IMP=0x00000000000908a7
- (void)countPillPressForMRC:(id)arg1 action:(id)arg2;	// IMP=0x0000000000090790
- (void)countButtonPressForMRC:(id)arg1 action:(id)arg2;	// IMP=0x0000000000090679
- (void)countTextButtonPress;	// IMP=0x00000000000905ee
- (id)eventName;	// IMP=0x00000000000905e1
- (id)initWithTextDetectionEnabled:(_Bool)arg1 MRCDetectionEnabled:(_Bool)arg2;	// IMP=0x0000000000090570

@end
