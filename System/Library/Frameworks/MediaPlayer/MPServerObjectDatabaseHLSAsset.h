//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

@interface MPServerObjectDatabaseHLSAsset : NSObject
{
    _Bool _iTunesStoreStream;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_hashedPersonID;	// 24 = 0x18
    NSURL *_playlistURL;	// 32 = 0x20
    NSURL *_keyCertificateURL;	// 40 = 0x28
    NSURL *_keyServerURL;	// 48 = 0x30
    NSNumber *_keyServerAdamID;	// 56 = 0x38
    NSString *_keyServerProtocolType;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001e8bfc
@property(readonly, nonatomic, getter=isiTunesStoreStream) _Bool iTunesStoreStream; // @synthesize iTunesStoreStream=_iTunesStoreStream;
@property(readonly, copy, nonatomic) NSString *keyServerProtocolType; // @synthesize keyServerProtocolType=_keyServerProtocolType;
@property(readonly, copy, nonatomic) NSNumber *keyServerAdamID; // @synthesize keyServerAdamID=_keyServerAdamID;
@property(readonly, copy, nonatomic) NSURL *keyServerURL; // @synthesize keyServerURL=_keyServerURL;
@property(readonly, copy, nonatomic) NSURL *keyCertificateURL; // @synthesize keyCertificateURL=_keyCertificateURL;
@property(readonly, copy, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
@property(readonly, copy, nonatomic) NSString *hashedPersonID; // @synthesize hashedPersonID=_hashedPersonID;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithSQLRowResult:(id)arg1;	// IMP=0x00000000001e8945
- (id)_initWithIdentifier:(id)arg1 hashedPersonID:(id)arg2 playlistURL:(id)arg3 keyCertificateURL:(id)arg4 keyServerURL:(id)arg5 keyServerAdamID:(id)arg6 keyServerProtocolType:(id)arg7 isiTunesStoreStream:(_Bool)arg8;	// IMP=0x00000000001e87dd

@end

