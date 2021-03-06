//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/UIActivityItemLinkPresentationSource-Protocol.h>

@class NSString, PXLinkPresentationConfiguration;

@interface PXLinkPresentationActivityItemProvider : NSObject <UIActivityItemLinkPresentationSource>
{
    PXLinkPresentationConfiguration *_configuration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000902bcb
@property(readonly, nonatomic) PXLinkPresentationConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;	// IMP=0x0000000000902b62
- (id)_linkMetadataForConfiguration:(id)arg1;	// IMP=0x0000000000902896
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000009027b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

