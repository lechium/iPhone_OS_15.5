//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/IDSCurrentServerTimeProvider-Protocol.h>

@interface _IDSCurrentServerTimeProvider : NSObject <IDSCurrentServerTimeProvider>
{
    id _apsConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000134d83
@property(readonly, nonatomic) id apsConnection; // @synthesize apsConnection=_apsConnection;
- (unsigned long long)serverTimeInNanoSeconds;	// IMP=0x0000000000134c9e
- (_Bool)isAccurate;	// IMP=0x0000000000134c88
- (id)init;	// IMP=0x0000000000134b39

@end

