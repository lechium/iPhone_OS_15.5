//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (NSDataExtensions)
- (_Bool)mf_immutable;	// IMP=0x0000000000012b8c
- (id)mf_subdataWithRange:(struct _NSRange)arg1;	// IMP=0x0000000000012afc
- (id)mf_encodeBase64HeaderData;	// IMP=0x0000000000020fba
- (id)mf_encodeModifiedBase64;	// IMP=0x0000000000020faa
- (id)mf_encodeBase64;	// IMP=0x0000000000020f91
- (id)mf_encodeBase64WithoutLineBreaks;	// IMP=0x0000000000020e70
- (id)mf_decodeModifiedBase64;	// IMP=0x0000000000020e5f
- (id)mf_decodeBase64InRange:(struct _NSRange *)arg1;	// IMP=0x0000000000020e53
- (id)mf_decodeBase64;	// IMP=0x0000000000020c8e
- (id)mf_decodeUuencoded;	// IMP=0x0000000000020bf1
- (id)mf_decodeQuotedPrintableForText:(_Bool)arg1;	// IMP=0x0000000000020a78
- (id)mf_dataByConvertingUnixNewlinesToNetwork;	// IMP=0x0000000000033d46
- (id)mf_locationsOfUnixNewlinesNeedingConversion;	// IMP=0x0000000000033c6e
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;	// IMP=0x0000000000033c24
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000033bd6
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1;	// IMP=0x0000000000033b8b
- (struct _NSRange)mf_rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;	// IMP=0x0000000000033ae9
- (id)mf_subdataFromIndex:(unsigned long long)arg1;	// IMP=0x0000000000033aa6
- (id)mf_subdataToIndex:(unsigned long long)arg1;	// IMP=0x0000000000033a8f
- (struct _NSRange)mf_rangeOfRFC822HeaderData;	// IMP=0x0000000000033761
@end

