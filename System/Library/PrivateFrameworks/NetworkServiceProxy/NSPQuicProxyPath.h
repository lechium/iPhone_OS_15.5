//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NSPQUICProxyPathDelegate;

@interface NSPQuicProxyPath
{
    id <NSPQUICProxyPathDelegate> _quicProxyPathDelegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000009b9ff
@property __weak id <NSPQUICProxyPathDelegate> quicProxyPathDelegate; // @synthesize quicProxyPathDelegate=_quicProxyPathDelegate;
- (_Bool)proxyPathIsValid:(id)arg1 proxyPathList:(id)arg2;	// IMP=0x000000000009b8c0
- (void)enableFallback:(_Bool)arg1;	// IMP=0x000000000009b864
- (void)resetMultiHopProxyAgent;	// IMP=0x000000000009b2c8
- (void)resetSingleHopProxyAgent;	// IMP=0x000000000009af64
- (void)setupMultiHopProxyRegistrations;	// IMP=0x000000000009ad06
- (void)setupSingleHopProxyRegistrations;	// IMP=0x000000000009abf8
- (id)initWithDelegate:(id)arg1 ingressProxy:(id)arg2 egressProxy:(id)arg3 proxyPathWeight:(unsigned long long)arg4 allowFallback:(_Bool)arg5 fallbackToQUIC:(_Bool)arg6 forceFallback:(_Bool)arg7 allowFailOpen:(_Bool)arg8 geohashSharingEnabled:(_Bool)arg9 networkCharacteristics:(id)arg10;	// IMP=0x000000000009aa6b

@end

