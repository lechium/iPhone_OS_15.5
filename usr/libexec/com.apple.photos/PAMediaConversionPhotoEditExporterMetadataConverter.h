//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface PAMediaConversionPhotoEditExporterMetadataConverter : NSObject
{
}

+ (MISSING_TYPE *)install;	// IMP=0x0020000000015c86
- (_Bool)setPhotoFeatureFlags:(id)arg1 properties:(id)arg2 error:(id *)arg3;	// IMP=0x0020000000015c5f
- (id)photoFeatureFlags:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000015bde
- (_Bool)setPhotoProcessingFlags:(id)arg1 properties:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000015bb7
- (id)photoProcessingFlagsFromProperties:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000015b36
- (_Bool)setImageVariation:(id)arg1 properties:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000015b0f
- (id)videoMetadataForVariation:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000015aeb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
