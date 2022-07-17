//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSURL;

@interface ISURLResolverOperation
{
    struct __CFHost *_host;	// 96 = 0x60
    NSURL *_url;	// 104 = 0x68
    NSURL *_URL;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000020ec5
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)_runLookupForHostname:(id)arg1;	// IMP=0x0000000000020920
- (void)_resolutionCompletedWithError:(id)arg1;	// IMP=0x0000000000020839
- (void)run;	// IMP=0x0000000000020749
- (id)url;	// IMP=0x00000000000206f4
- (void)setUrl:(id)arg1;	// IMP=0x0000000000020674
@property(readonly) NSArray *resolvedAddressStrings;
@property(readonly) NSArray *resolvedAddresses;
- (void)dealloc;	// IMP=0x00000000000201e6
- (id)initWithURL:(id)arg1;	// IMP=0x000000000002016c

@end
