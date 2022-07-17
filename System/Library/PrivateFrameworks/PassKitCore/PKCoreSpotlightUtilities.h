//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PKCoreSpotlightUtilities : NSObject
{
}

+ (id)transactionIdentifierFromSpotlightIdentifier:(id)arg1;	// IMP=0x000000000018237f
+ (id)spotlightIdentifierForTransactionIdentifier:(id)arg1;	// IMP=0x0000000000182353
+ (id)passUniqueIdentifierFromSpotlightIdentifier:(id)arg1;	// IMP=0x00000000001822e2
+ (id)spotlightIdentifierForPassUniqueIdentifier:(id)arg1;	// IMP=0x00000000001822b6
+ (id)passUniqueIdentifierFromCardInformationSpotlightIdentifier:(id)arg1;	// IMP=0x0000000000182245
+ (id)spotlightIdentifierForCardInformationUniqueIdentifier:(id)arg1;	// IMP=0x0000000000182219
+ (struct CGSize)_thumbnailImageSizeForSourceImageSize:(struct CGSize)arg1;	// IMP=0x000000000018217d
+ (void)searchableItemForCardNumberFromPass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000181cf9
+ (void)searchableItemForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018165d
+ (void)searchableItemForTransaction:(id)arg1 passUniqueIdentifier:(id)arg2 regions:(id)arg3 tags:(id)arg4 keywords:(id)arg5 imageGenerator:(id)arg6 contactResolver:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000000017f71b

@end
