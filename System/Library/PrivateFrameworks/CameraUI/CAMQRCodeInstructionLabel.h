//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CAMQRCodeInstructionLabel
{
    long long _devicePosition;	// 8 = 0x8
    NSArray *_mrcResults;	// 16 = 0x10
}

+ (id)_textForMRCResults:(id)arg1 devicePosition:(long long)arg2;	// IMP=0x0000000000020f43
+ (_Bool)shouldDisplayInstructionForMRCResults:(id)arg1 devicePosition:(long long)arg2;	// IMP=0x0000000000020efb
- (void).cxx_destruct;	// IMP=0x00000000001891d9
@property(retain, nonatomic, setter=setMRCResults:) NSArray *mrcResults; // @synthesize mrcResults=_mrcResults;
@property(nonatomic) long long devicePosition; // @synthesize devicePosition=_devicePosition;
- (void)_updateTextWithPriorMRCResults:(id)arg1;	// IMP=0x00000000000275cb
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000002d73d

@end

