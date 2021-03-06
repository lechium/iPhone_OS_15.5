//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface ICStoreRadioStreamAssetInfo : NSObject
{
    NSDictionary *_itemResponseDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000e6ea6
- (long long)ICStoreRadioStreamProtocolWithString:(id)arg1;	// IMP=0x00000000000e6e3e
- (long long)ICStoreRadioStreamFlavorWithString:(id)arg1;	// IMP=0x00000000000e6dd9
@property(readonly, nonatomic, getter=isiTunesStoreStream) _Bool iTunesStoreStream;
@property(readonly, copy, nonatomic) NSURL *keyServerURL;
@property(readonly, copy, nonatomic) NSURL *keyCertificateURL;
@property(readonly, copy, nonatomic) NSURL *streamURL;
@property(readonly, nonatomic) long long streamProtocol;
@property(readonly, nonatomic) long long flavor;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e6ae0
- (id)initWithItemResponseDictionary:(id)arg1;	// IMP=0x00000000000e6a6d

@end

