//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKLabel;

@interface GKComposeHeaderField
{
    GKLabel *_valueLabel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000016eaed
@property(retain, nonatomic) GKLabel *valueLabel; // @synthesize valueLabel=_valueLabel;
- (struct CGRect)valueFrame;	// IMP=0x000000000016ea49
- (void)setMaxLineCount:(unsigned long long)arg1;	// IMP=0x000000000016e9e1
- (void)setValueText:(id)arg1;	// IMP=0x000000000016e7fa
- (id)valueText;	// IMP=0x000000000016e780
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000016e667

@end
