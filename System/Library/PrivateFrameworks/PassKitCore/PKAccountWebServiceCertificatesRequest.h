//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface PKAccountWebServiceCertificatesRequest
{
    NSURL *_baseURL;	// 8 = 0x8
    unsigned long long _destination;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000090141
@property(nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;	// IMP=0x000000000008fe32

@end
