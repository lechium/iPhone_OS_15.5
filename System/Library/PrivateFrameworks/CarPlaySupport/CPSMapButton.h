//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPMapButton;

@interface CPSMapButton
{
    CPMapButton *_mapButton;	// 8 = 0x8
}

+ (id)buttonWithCPMapButton:(id)arg1;	// IMP=0x000000000002db95
- (void).cxx_destruct;	// IMP=0x000000000002de91
@property(retain, nonatomic) CPMapButton *mapButton; // @synthesize mapButton=_mapButton;
- (void)_updateButtonImages;	// IMP=0x000000000002dd2a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000002dce9
- (void)setCharge:(float)arg1;	// IMP=0x000000000002dcb2
- (float)charge;	// IMP=0x000000000002dca4

@end

