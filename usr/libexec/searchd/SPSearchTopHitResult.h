//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SPSearchTopHitResult
{
    // Error: parsing type: '^{SPResultValueItem_s=iT@difq{__packedFieldArray=[3Q]CC^^{__field_s}^{__CFArray}}}', name: _clientData
}

+ (id)richTextArrayFromArray:(id)arg1;	// IMP=0x004000000000a96e
- (void)populateAttributesForResult:(id)arg1 withValues:(struct __packedFieldArray *)arg2;	// IMP=0x002000000000bce5
- (id)resultWithTime:(double)arg1 searchString:(id)arg2 isCorrectedQuery:(_Bool)arg3 withQueryContext:(id)arg4;	// IMP=0x001000000000abc7
- (void)populateCoreSpotlightResult:(id)arg1 values:(struct __packedFieldArray *)arg2 bundleID:(id)arg3 queryContext:(id)arg4;	// IMP=0x001000000000a0c1
- (void)updateDataOwnerTypeForResult:(id)arg1 accountID:(id)arg2;	// IMP=0x0010000000009e97
- (void)setupGenericItem:(id)arg1 values:(struct __packedFieldArray *)arg2 utiType:(id)arg3 bundleID:(id)arg4;	// IMP=0x0010000000009959
- (_Bool)_contentType:(id)arg1 orContentTypeTree:(id)arg2 representsType:(id)arg3;	// IMP=0x00100000000098e0
- (_Bool)documentIsRepresentedByContentType:(id)arg1 orContentTypeTree:(id)arg2;	// IMP=0x00100000000098c4
- (_Bool)contactIsRepresentedByContentType:(id)arg1 orContentTypeTree:(id)arg2;	// IMP=0x00100000000098a8
- (_Bool)messageIsRepresentedByContentType:(id)arg1 orContentTypeTree:(id)arg2;	// IMP=0x001000000000988c
- (_Bool)reminderIsRepresentedByContentType:(id)arg1 orContentTypeTree:(id)arg2;	// IMP=0x0010000000009870
- (_Bool)eventIsRepresentedByContentType:(id)arg1 orContentTypeTree:(id)arg2;	// IMP=0x0010000000009854
- (_Bool)bookIsRepresentedByContentType:(id)arg1 orContentTypeTree:(id)arg2;	// IMP=0x001000000000983b
- (_Bool)playlistOrAlbumIsRepresentedByContentType:(id)arg1 orContentTypeTree:(id)arg2;	// IMP=0x001000000000981f
- (_Bool)audioOrVideoIsRepresentedByContentType:(id)arg1 orContentTypeTree:(id)arg2;	// IMP=0x0010000000009803
- (_Bool)audioIsRepresentedByContentType:(id)arg1 orContentTypeTree:(id)arg2;	// IMP=0x00100000000097e7
- (_Bool)videoIsRepresentedByContentType:(id)arg1 orContentTypeTree:(id)arg2;	// IMP=0x001000000000974f
- (_Bool)imageIsRepresentedByContentType:(id)arg1 orContentTypeTree:(id)arg2;	// IMP=0x0010000000009733
- (void)makeContactResult:(struct __packedFieldArray *)arg1 identifier:(id)arg2 queryContext:(id)arg3 result:(id)arg4;	// IMP=0x001000000000943d
- (void)makeDateBasedResult:(struct __packedFieldArray *)arg1 result:(id)arg2;	// IMP=0x001000000000925e
- (id)makeApplicationResult:(struct __packedFieldArray *)arg1 dataclass:(id)arg2 score: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000008dfe
- (id)makePersonResult:(struct __packedFieldArray *)arg1 dataclass:(id)arg2 queryContext:(id)arg3 score: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000007515
- (id)makePhotosResult:(struct __packedFieldArray *)arg1 dataclass:(id)arg2 queryContext:(id)arg3 score: /* Error: Ran out of types for this method. */;	// IMP=0x001000000000709c
- (id)makeMessagesResult:(struct __packedFieldArray *)arg1 dataclass:(id)arg2 queryContext:(id)arg3 score: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000006b8b
- (id)makeMailResult:(struct __packedFieldArray *)arg1 dataclass:(id)arg2 score:searchString: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000068b4
- (id)titleStringFromValues:(struct __packedFieldArray *)arg1;	// IMP=0x00100000000067b0
- (id)authorStringFromValues:(struct __packedFieldArray *)arg1;	// IMP=0x001000000000666d
- (void)dealloc;	// IMP=0x001000000000661b
-     // Error parsing type: ^{SPResultValueItem_s=iT@difq{__packedFieldArray=[3Q]CC^^{__field_s}^{__CFArray}}}16@0:8, name: clientData
-     // Error parsing type: v24@0:8^{SPResultValueItem_s=iT@difq{__packedFieldArray=[3Q]CC^^{__field_s}^{__CFArray}}}16, name: setClientData:
- (void)attachShadowArray:(id)arg1;	// IMP=0x001000000000657b

@end

