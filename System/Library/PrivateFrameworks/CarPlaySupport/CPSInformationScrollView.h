//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray;
@protocol CPSInformationScrollViewDelegate;

@interface CPSInformationScrollView : UIScrollView
{
    id <CPSInformationScrollViewDelegate> _scrollviewDelegate;	// 8 = 0x8
    NSMutableArray *_focusWaypoints;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007206e
@property(retain, nonatomic) NSMutableArray *focusWaypoints; // @synthesize focusWaypoints=_focusWaypoints;
@property(nonatomic) __weak id <CPSInformationScrollViewDelegate> scrollviewDelegate; // @synthesize scrollviewDelegate=_scrollviewDelegate;
- (void)setContentSize:(struct CGSize)arg1;	// IMP=0x0000000000071f13

@end
