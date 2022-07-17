//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class ICMediaTime, ICMediaTimeFormatter;

@interface ICMediaTimeLabel : UILabel
{
    ICMediaTime *_mediaTimeValue;	// 8 = 0x8
    ICMediaTimeFormatter *_formatter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000057223
@property(retain, nonatomic) ICMediaTimeFormatter *formatter; // @synthesize formatter=_formatter;
@property(copy, nonatomic) ICMediaTime *mediaTimeValue; // @synthesize mediaTimeValue=_mediaTimeValue;
- (void)commonInit;	// IMP=0x00000000000570ca
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005707e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000057021
- (id)accessibilityValue;	// IMP=0x00000000000af7b9

@end
