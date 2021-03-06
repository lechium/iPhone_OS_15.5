//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLResourceChooser : NSObject
{
}

+ (unsigned long long)cloudResourceTypeForAsset:(id)arg1 format:(id)arg2 filePath:(id *)arg3 imageType:(long long *)arg4;	// IMP=0x00000000003219ec
+ (long long)_fileResourceTypeForCloudResourceType:(unsigned long long)arg1 hasAdjustments:(_Bool)arg2 requiresUnadjustedVersion:(_Bool)arg3;	// IMP=0x000000000032196a
+ (void)_chooseCloudResourceTypeForFormat:(id)arg1 asset:(id)arg2 optimalCPLResourceType:(unsigned long long *)arg3 localCPLResourceType:(unsigned long long *)arg4 localCPLResourceFilePath:(id *)arg5 fileReservation:(id *)arg6;	// IMP=0x00000000003210ba
+ (id)_itemMatchingFormat:(id)arg1 allItems:(id)arg2 acceptableSortedAlternatives:(id *)arg3;	// IMP=0x0000000000320c00
+ (id)_filteredArrayUsingPredicate:(id)arg1 originalItems:(id)arg2 nonMatchingItems:(id *)arg3;	// IMP=0x00000000003209de
+ (id)_penultimateItemFromAllItems:(id)arg1;	// IMP=0x000000000032090e
+ (id)_originalItemFromAllItems:(id)arg1;	// IMP=0x00000000003207fe
+ (id)fileReservationForImageFileForAsset:(id)arg1 format:(id)arg2 outFilePath:(id *)arg3 outImageType:(long long *)arg4;	// IMP=0x00000000003203e4
+ (id)fileReservationForLargeDisplayableImageFileForAsset:(id)arg1 format:(id)arg2 allowMetadataSnapshot:(_Bool)arg3 forceLarge:(_Bool)arg4 outFilePath:(id *)arg5 outImageType:(long long *)arg6;	// IMP=0x000000000031fda1
+ (id)_chooseFileReservationForLargeDisplayableImageFileForAsset:(id)arg1 format:(id)arg2 forceLarge:(_Bool)arg3 allowMetadataSnapshot:(_Bool)arg4 outFilePath:(id *)arg5 outImageType:(long long *)arg6;	// IMP=0x000000000031f8a6
- (id)init;	// IMP=0x000000000031f877

@end

