//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

#import <IconServices/ISCompositorResource-Protocol.h>

@interface NSString (ISCompositorResource) <ISCompositorResource>
- (id)_IS_scaleableResourceMetadataFromFileName;	// IMP=0x000000000002b4d9
- (id)_IS_imageMetadataFromFileName;	// IMP=0x000000000002b0ed
- (id)scaleableResourceMetadataFromFileName;	// IMP=0x000000000002af00
- (id)imageMetadataFromFileName;	// IMP=0x000000000002ad13

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
