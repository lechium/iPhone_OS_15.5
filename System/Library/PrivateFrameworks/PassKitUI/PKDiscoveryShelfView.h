//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString;

@interface PKDiscoveryShelfView : UIView
{
    NSString *_itemIdentifier;	// 8 = 0x8
    struct UIEdgeInsets _contentInsets;	// 16 = 0x10
}

+ (id)viewForShelf:(id)arg1 discoveryCardViewDelegate:(id)arg2;	// IMP=0x000000000018242c
+ (id)viewForShelf:(id)arg1 discoveryCardViewDelegate:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x000000000018227c
- (void).cxx_destruct;	// IMP=0x0000000000182532
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000182441

@end

