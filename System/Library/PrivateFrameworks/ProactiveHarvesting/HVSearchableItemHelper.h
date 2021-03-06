//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HVSearchableItemHelper : NSObject
{
}

+ (id)sanitizeHandles:(id)arg1;	// IMP=0x00000000000077f3
+ (id)deserializeAttributesAndBody:(id)arg1;	// IMP=0x000000000000774d
+ (id)deserializeAttributes:(id)arg1 andBody:(id)arg2;	// IMP=0x000000000000762b
+ (id)deserializeAttributes:(id)arg1;	// IMP=0x00000000000075ae
+ (id)serializeAttributesAndBody:(id)arg1;	// IMP=0x000000000000747d
+ (id)htmlContentDataNoCopyRetainingBackingBuffer:(id)arg1;	// IMP=0x0000000000007369
+ (id)textContentNoCopyRetainingBackingBuffer:(id)arg1;	// IMP=0x000000000000722d
+ (_Bool)mailItemIsTooBig:(id)arg1;	// IMP=0x00000000000071b5
+ (_Bool)mailItemIsInTrash:(id)arg1;	// IMP=0x000000000000711d
+ (_Bool)mailItemIsInSent:(id)arg1;	// IMP=0x0000000000007085
+ (_Bool)mailItemIsInDrafts:(id)arg1;	// IMP=0x0000000000006fed
+ (_Bool)mailItemIsSPAM:(id)arg1;	// IMP=0x0000000000006f13
+ (_Bool)mailItemIsValid:(id)arg1;	// IMP=0x0000000000006e39
+ (_Bool)mailItemIsRecent:(id)arg1;	// IMP=0x0000000000006da1
+ (_Bool)mailItemIsSPAM:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3;	// IMP=0x00000000000062b0
+ (_Bool)searchableItemIsOutgoing:(id)arg1;	// IMP=0x000000000000604f
+ (_Bool)searchableItemIsEmpty:(id)arg1;	// IMP=0x0000000000005fbe
+ (_Bool)mailItemIsFromSupportedAccount:(id)arg1;	// IMP=0x0000000000005e1e
+ (_Bool)mailItemIsInTrash:(id)arg1 mailboxIdentifiers:(id)arg2;	// IMP=0x0000000000005d91
+ (_Bool)mailItemIsInSent:(id)arg1 mailboxIdentifiers:(id)arg2;	// IMP=0x0000000000005d04
+ (_Bool)mailItemIsInDrafts:(id)arg1 mailboxIdentifiers:(id)arg2;	// IMP=0x0000000000005c77
+ (_Bool)mailItemIsValid:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3;	// IMP=0x00000000000059e2
+ (id)messageIdHeaderValuesFromHeaders:(id)arg1;	// IMP=0x0000000000005767
+ (id)mailItemMessageIdHeaderValues:(id)arg1;	// IMP=0x00000000000056d7
+ (_Bool)mailItemIsRecent:(id)arg1 emailHeaders:(id)arg2;	// IMP=0x00000000000050b5

@end

