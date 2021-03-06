//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL;

@interface MFMixedMessageFragment : NSObject
{
    NSString *_markupString;	// 8 = 0x8
    NSData *_markupData;	// 16 = 0x10
    NSString *_mimeType;	// 24 = 0x18
    NSString *_textEncodingName;	// 32 = 0x20
    NSURL *_baseURL;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000da1e8
- (id)description;	// IMP=0x00000000000da160
- (id)baseURL;	// IMP=0x00000000000da152
- (id)encodingName;	// IMP=0x00000000000da144
- (id)mimeType;	// IMP=0x00000000000da136
- (id)markupData;	// IMP=0x00000000000da128
- (id)markupString;	// IMP=0x00000000000da11a
- (id)initWithMarkupData:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3;	// IMP=0x00000000000da02a
- (id)initWithMarkupString:(id)arg1 baseURL:(id)arg2;	// IMP=0x00000000000d9f73

@end

