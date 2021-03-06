//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSNumber, UILabel;

@interface HUSetupCodeFieldItem : UIView
{
    _Bool _active;	// 8 = 0x8
    unsigned long long _itemNumber;	// 16 = 0x10
    NSNumber *_value;	// 24 = 0x18
    UILabel *_digitLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000027a849
@property(retain, nonatomic) UILabel *digitLabel; // @synthesize digitLabel=_digitLabel;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long itemNumber; // @synthesize itemNumber=_itemNumber;
- (void)clear;	// IMP=0x000000000027a7bd
- (void)deactivate;	// IMP=0x000000000027a7a9
- (void)activate;	// IMP=0x000000000027a792
- (id)init;	// IMP=0x000000000027a467

@end

