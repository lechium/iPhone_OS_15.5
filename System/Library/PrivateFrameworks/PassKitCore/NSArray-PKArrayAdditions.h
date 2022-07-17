//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (PKArrayAdditions)
+ (id)pk_FilteredCardErrors:(id)arg1;	// IMP=0x00000000001e88c2
+ (id)pk_FilteredShippingErrorsForContactFields:(id)arg1 errors:(id)arg2;	// IMP=0x00000000001e8468
+ (id)pk_FilteredBillingErrorsForContactFields:(id)arg1 errors:(id)arg2;	// IMP=0x00000000001e8078
+ (id)paymentShippingAddressUnserviceableErrorWithLocalizedDescription:(id)arg1;	// IMP=0x00000000001e805f
+ (id)paymentBillingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;	// IMP=0x00000000001e8046
+ (id)paymentShippingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;	// IMP=0x00000000001e802d
+ (id)paymentContactInvalidErrorWithContactField:(id)arg1 localizedDescription:(id)arg2;	// IMP=0x00000000001e8014
- (id)pk_orderedSet;	// IMP=0x0000000000065dfe
- (id)pk_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000065d25
- (_Bool)pk_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000065c62
- (id)pk_intersectArray:(id)arg1;	// IMP=0x0000000000065ba7
- (id)pk_groupDictionaryByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000065971
- (id)pk_indexDictionaryByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000657bf
- (unsigned long long)pk_countObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000000656b4
- (id)pk_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000065655
- (id)pk_shuffledArray;	// IMP=0x0000000000065594
- (id)pk_arrayBySafelyApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006557a
- (id)pk_arrayByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000065560
- (id)pk_createArrayBySafelyApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000065340
- (id)pk_createArrayByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000065124
- (id)pk_arrayByRemovingObjectsInArray:(id)arg1;	// IMP=0x000000000006509f
- (id)pk_arrayByRemovingObject:(id)arg1;	// IMP=0x000000000006502d
@end
