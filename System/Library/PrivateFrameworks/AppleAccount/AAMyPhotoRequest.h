//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSString;

@interface AAMyPhotoRequest
{
    ACAccount *_account;	// 64 = 0x40
    NSString *_serverCacheTag;	// 72 = 0x48
    ACAccount *_iTunesAccount;	// 80 = 0x50
}

+ (Class)responseClass;	// IMP=0x000000000001c8ff
- (void).cxx_destruct;	// IMP=0x000000000001cae0
@property(retain, nonatomic, setter=setiTunesAccount:) ACAccount *iTunesAccount; // @synthesize iTunesAccount=_iTunesAccount;
@property(copy, nonatomic) NSString *serverCacheTag; // @synthesize serverCacheTag=_serverCacheTag;
- (id)urlRequest;	// IMP=0x000000000001c9d5
- (id)urlString;	// IMP=0x000000000001c97e
- (id)initWithAccount:(id)arg1;	// IMP=0x000000000001c910

@end

