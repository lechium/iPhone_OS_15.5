//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class MISSING_TYPE;
@protocol DetailTableViewCellDelegate;

@interface CarplayDetailTableViewCell : UITableViewCell
{
    MISSING_TYPE *_delegate;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x00400000000cb52d
- (void).cxx_destruct;	// IMP=0x00200000000cb574
@property(nonatomic) __weak id <DetailTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isSelectable;	// IMP=0x00100000000cb53f

@end

