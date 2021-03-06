//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SOSCKCircleStorage
{
}

- (struct __CFArray *)handleCircleMessagesAndReturnHandledCopy:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00400000001f99b1
- (struct __CFDictionary *)handleRetirementMessages:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000001f99a9
- (_Bool)postRetirement:(struct __CFString *)arg1 peer:(struct __OpaqueSOSPeerInfo *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000001f99a1
- (_Bool)postCircle:(struct __CFString *)arg1 circleData:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000001f9999
- (_Bool)flushChanges:(struct __CFError **)arg1;	// IMP=0x00100000001f9991
- (_Bool)expireRetirementRecords:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000001f9989
- (id)getAccount;	// IMP=0x00100000001f9977
- (long long)getTransportType;	// IMP=0x00100000001f996c
- (id)initWithAccount:(id)arg1;	// IMP=0x00100000001f9904
- (id)init;	// IMP=0x00100000001f98c0

@end

