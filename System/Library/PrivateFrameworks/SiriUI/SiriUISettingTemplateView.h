//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel;
@protocol SiriUISettingTemplateModel;

@interface SiriUISettingTemplateView
{
    UILabel *_textLabel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000049233
- (void)layoutSubviews;	// IMP=0x000000000004907d
- (void)reloadData;	// IMP=0x0000000000048fca
- (double)desiredHeight;	// IMP=0x0000000000048fbc
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000048ef4

// Remaining properties
@property(nonatomic) __weak id <SiriUISettingTemplateModel> dataSource; // @dynamic dataSource;

@end
