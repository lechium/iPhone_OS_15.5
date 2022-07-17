//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

#import <PassKitUI/PKListTextFieldContentViewDelegate-Protocol.h>

@class NSString;
@protocol PKTextFieldCollectionViewListCellDelegate;

@interface PKTextFieldCollectionViewListCell : UICollectionViewListCell <PKListTextFieldContentViewDelegate>
{
    id <PKTextFieldCollectionViewListCellDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003cdd3b
@property(retain, nonatomic) id <PKTextFieldCollectionViewListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)textFieldDidEndEditing:(id)arg1 forContentView:(id)arg2;	// IMP=0x00000000003cdcba
- (void)textFieldDidBeginEditing:(id)arg1 forContentView:(id)arg2;	// IMP=0x00000000003cdc5e
- (_Bool)textFieldShouldReturn:(id)arg1 forContentView:(id)arg2;	// IMP=0x00000000003cdbf9
- (id)_textFieldContentView;	// IMP=0x00000000003cdbe7
- (void)resetTextFieldTextFromLabel;	// IMP=0x00000000003cdbaa
- (void)endEditing;	// IMP=0x00000000003cdb6d
- (void)beginEditing;	// IMP=0x00000000003cdb30
- (id)textFieldText;	// IMP=0x00000000003cdae0
- (void)prepareForReuse;	// IMP=0x00000000003cda73
- (void)updateConfigurationUsingState:(id)arg1;	// IMP=0x00000000003cd98a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
