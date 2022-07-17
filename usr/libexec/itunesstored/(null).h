//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSNumber;

@interface (null) : ISOperation
{
    NSNumber *_accountID;	// 96 = 0x60
    NSArray *_items;	// 104 = 0x68
}

- (id)_newURLOperation;	// IMP=0x002000000010e287
- (void)run;	// IMP=0x001000000010dc3e
@property(readonly) NSArray *preorderItems;
@property(readonly) NSNumber *accountIdentifier;
- (void)dealloc;	// IMP=0x001000000010db73
- (id)initWithAccountIdentifier:(id)arg1;	// IMP=0x001000000010db1c

@end
