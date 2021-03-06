//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <CarPlaySupport/CPSEntityUpdateSupporting-Protocol.h>

@class NSArray, NSString, UILabel, UIStackView;
@protocol CPEntityNameProviding;

@interface CPSNameViewController : UIViewController <CPSEntityUpdateSupporting>
{
    id <CPEntityNameProviding> _entity;	// 8 = 0x8
    UILabel *_primaryLabel;	// 16 = 0x10
    UILabel *_secondaryLabel;	// 24 = 0x18
    UILabel *_tertiaryLabel;	// 32 = 0x20
    UIStackView *_stackView;	// 40 = 0x28
    NSArray *_layoutConstraints;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000779b9
@property(retain, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) UILabel *tertiaryLabel; // @synthesize tertiaryLabel=_tertiaryLabel;
@property(readonly, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic) id <CPEntityNameProviding> entity; // @synthesize entity=_entity;
- (void)setupLayoutConstraints;	// IMP=0x000000000007751d
- (void)updateViewConstraints;	// IMP=0x0000000000077497
- (void)resetLayoutConstraints;	// IMP=0x00000000000773b4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000077373
- (void)updateViews;	// IMP=0x000000000007717a
- (void)setupViews;	// IMP=0x0000000000076b40
- (void)viewDidLoad;	// IMP=0x0000000000076aea
- (void)updateWithEntity:(id)arg1;	// IMP=0x0000000000076aaf
- (id)initWithEntity:(id)arg1;	// IMP=0x0000000000076a1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

