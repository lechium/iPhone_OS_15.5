//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PHImportLibraryAsset
{
    _Bool _isPenultimate;	// 24 = 0x18
}

+ (_Bool)isValidAsSidecar:(id)arg1;	// IMP=0x000000000020f8a9
- (id)nameKey;	// IMP=0x0000000000210591
- (_Bool)canDelete;	// IMP=0x0000000000210589
- (_Bool)canReference;	// IMP=0x0000000000210581
- (_Bool)isRender;	// IMP=0x0000000000210544
- (_Bool)isSidecar;	// IMP=0x00000000002104fb
- (_Bool)isBase;	// IMP=0x00000000002104eb
- (_Bool)shouldPreserveUUID;	// IMP=0x00000000002104e3
- (void)configureSidecarTypeForExtension:(id)arg1;	// IMP=0x000000000021044a
- (id)makeImportIdentifier;	// IMP=0x0000000000210390
- (id)initWithSource:(id)arg1 url:(id)arg2 type:(id)arg3 supportedMediaType:(unsigned char)arg4 uuid:(id)arg5;	// IMP=0x000000000020f96a

@end

