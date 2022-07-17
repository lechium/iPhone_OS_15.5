//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUDisableableCellProtocol-Protocol.h>

@class NSString;

@interface HUAssociatedServiceTypeOptionCell : UITableViewCell <HUDisableableCellProtocol>
{
    _Bool _disabled;	// 8 = 0x8
    _Bool _checked;	// 9 = 0x9
    _Bool _suggestion;	// 10 = 0xa
}

@property(nonatomic, getter=isSuggestion) _Bool suggestion; // @synthesize suggestion=_suggestion;
@property(nonatomic, getter=isChecked) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
- (id)colorForCurrentState;	// IMP=0x00000000002575af
- (void)prepareForReuse;	// IMP=0x0000000000257442

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
