//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VisualTestKit/VTKReferenceItemsSource-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VTKAssetCatalogReferenceItemsSource : NSObject <VTKReferenceItemsSource>
{
}

- (id)referenceImageWithID:(id)arg1 testCase:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000535f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *itemsDirectory;
@property(readonly) Class superclass;

@end

