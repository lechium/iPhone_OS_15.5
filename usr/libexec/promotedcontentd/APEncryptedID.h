//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSUUID;

@interface APEncryptedID : NSObject
{
    NSData *_anonymousDemandID;	// 8 = 0x8
    NSData *_contentID;	// 16 = 0x10
    NSData *_DPID;	// 24 = 0x18
    NSData *_iAdID;	// 32 = 0x20
    NSData *_toroID;	// 40 = 0x28
    NSUUID *_unencryptedIAdID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000498e9
@property(readonly, nonatomic) NSUUID *unencryptedIAdID; // @synthesize unencryptedIAdID=_unencryptedIAdID;
@property(readonly, nonatomic) NSData *toroID; // @synthesize toroID=_toroID;
@property(readonly, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
@property(readonly, nonatomic) NSData *DPID; // @synthesize DPID=_DPID;
@property(readonly, nonatomic) NSData *contentID; // @synthesize contentID=_contentID;
@property(readonly, nonatomic) NSData *anonymousDemandID; // @synthesize anonymousDemandID=_anonymousDemandID;
- (id)initWithIDAccountPrivate:(id)arg1;	// IMP=0x0010000000049667

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

