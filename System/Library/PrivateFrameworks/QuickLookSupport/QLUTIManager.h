//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface QLUTIManager : NSObject
{
}

+ (id)screentimeiWorkBundleForUTI:(id)arg1;	// IMP=0x000000000000a8bd
+ (id)typesForWhichExternalGeneratorsArePreferred;	// IMP=0x000000000000a821
+ (id)textGeneratorSupportedTypes;	// IMP=0x000000000000a71c
+ (id)internallyClaimedTypes;	// IMP=0x000000000000a2ee
+ (id)claimedWebViewTypes;	// IMP=0x000000000000a26f
+ (id)claimedCSVTypes;	// IMP=0x000000000000a203
+ (id)claimediWorkTypes;	// IMP=0x000000000000a119
+ (id)claimedOfficeTypes;	// IMP=0x0000000000009fdc
+ (id)claimedAVTypes;	// IMP=0x0000000000009e92
+ (id)claimedImageTypes;	// IMP=0x0000000000009d2c
+ (id)claimedPDFTypes;	// IMP=0x0000000000009cfd
+ (id)claimedTextTypes;	// IMP=0x0000000000009c50
+ (id)claimedCalendarTypes;	// IMP=0x0000000000009c2d
+ (id)claimedContactTypes;	// IMP=0x0000000000009c0a
+ (id)claimedLivePhotoTypes;	// IMP=0x0000000000009be3
+ (id)_selectParentUTIForUTI:(id)arg1 fromParentUTIs:(id)arg2 dictionary:(id)arg3 alreadySeenUTIs:(id)arg4 matchedValueToTypeBlock:(CDUnknownBlockType)arg5 validationBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000000983d
+ (id)_preferredParentUTIof:(id)arg1 fromParents:(id)arg2;	// IMP=0x0000000000009813
+ (id)_recursiveValueInDictionary:(id)arg1 forType:(id)arg2 alreadySeenUTIs:(id)arg3 matchedValueToTypeBlock:(CDUnknownBlockType)arg4 validationBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000000932b
+ (id)_searchParentTypesFor:(id)arg1 fromDictionary:(id)arg2 alreadySeenUTIs:(id)arg3 matchedValueToTypeBlock:(CDUnknownBlockType)arg4 validationBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000009192
+ (id)findAndStoreValueInTypeKeyedDictionary:(id)arg1 forType:(id)arg2 withDescription:(id)arg3 withQueue:(id)arg4 validationBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000008bc7
+ (id)valueInTypeKeyedDictionary:(id)arg1 forType:(id)arg2;	// IMP=0x0000000000008b9e

@end

