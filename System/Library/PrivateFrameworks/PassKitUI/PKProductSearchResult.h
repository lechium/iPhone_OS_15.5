//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKPaymentSetupProductsSectionListItem;

@interface PKProductSearchResult : NSObject
{
    PKPaymentSetupProductsSectionListItem *_listItem;	// 8 = 0x8
    double _searchDistance;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000029f06d
@property(readonly, nonatomic) double searchDistance; // @synthesize searchDistance=_searchDistance;
@property(readonly, nonatomic) PKPaymentSetupProductsSectionListItem *listItem; // @synthesize listItem=_listItem;
- (id)initWithListItem:(id)arg1 searchDistance:(double)arg2;	// IMP=0x000000000029efde

@end

