//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HSResponseDataParser : NSObject
{
}

+ (id)_parseListingItemWithBytes:(const char *)arg1 length:(unsigned int)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000827d
+ (id)_parseErrorResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000000801c
+ (id)_parsePlayStatusResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000007483
+ (id)_parseItemIDArrayWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000072d7
+ (id)_parseBrowseListingWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000000712a
+ (id)_parseListingCollectionWithBytes:(const char *)arg1 length:(unsigned long long)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006f2b
+ (id)_parseItemsResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006c00
+ (id)_parseUpdateTypeWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000006b14
+ (id)_parseEditCommandResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000000690e
+ (id)_parseDictionaryCollectionWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000006682
+ (id)_parseDeletedIDListingWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000006439
+ (id)_parseControlPromptResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000061ff
+ (id)_parseControlInterfacesResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000006056
+ (id)_parseCloudLyricsInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000005e92
+ (id)_parseCloudArtworkInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000005cce
+ (id)_parseBulkCloudLyricsInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000005b45
+ (id)_parseBulkCloudArtworkInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000059bc
+ (id)_parseAuthorizedAccountTokenWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000056e5
+ (id)_parseUpdateResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000005514
+ (id)_parseLoginResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000005344
+ (id)_parseResponseCode:(unsigned int)arg1 bytes:(const char *)arg2 length:(unsigned long long)arg3 usingHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000505e
+ (unsigned long long)_parseItemPropertyCountWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000005034
+ (void)enumerateDeletedItemsInResponseData:(id)arg1 usingHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004eba
+ (void)enumerateItemsInResponseData:(id)arg1 usingHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004e18
+ (void)parseItemWithBytes:(const char *)arg1 length:(unsigned long long)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004d41
+ (unsigned long long)parseItemWithBytes:(const char *)arg1 length:(unsigned long long)arg2 valuesOut:(CDStruct_557df7f8 *)arg3 valuesCapacity:(unsigned long long)arg4;	// IMP=0x0000000000004a1e
+ (id)enumerateRawItemsInResponseData:(id)arg1 usingHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000048ae
+ (id)parseResponseData:(id)arg1;	// IMP=0x000000000000489a
+ (id)parseErrorInResponseData:(id)arg1;	// IMP=0x0000000000004743

@end

