//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IOKService
{
}

+ (id)addNotificationOfType:(id)arg1 forMatching:(id)arg2 usingNotificationPort:(id)arg3 error:(id *)arg4 withEnumerationBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000005995
+ (id)addNotificationOfType:(id)arg1 forMatching:(id)arg2 usingNotificationPort:(id)arg3 error:(id *)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000052d0
+ (id)matchingServices:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000051dd
+ (id)matchingService:(id)arg1;	// IMP=0x0000000000005176
+ (id)entryIDMatching:(unsigned long long)arg1;	// IMP=0x0000000000005153
+ (id)bsdNameMatching:(id)arg1;	// IMP=0x000000000000510b
+ (id)nameMatching:(id)arg1;	// IMP=0x00000000000050d0
+ (id)serviceMatching:(id)arg1;	// IMP=0x0000000000005095
- (_Bool)isServiceAuthorizedForOpenAllowInteraction:(_Bool)arg1;	// IMP=0x000000000000686f
- (_Bool)requestProbeWithOptions:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x00000000000067c8
- (id)connectToServiceOfType:(unsigned int)arg1;	// IMP=0x000000000000678d
- (unsigned int)busyState;	// IMP=0x000000000000675d
- (_Bool)matchesPropertyTable:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000667c
- (id)addInterestNotifcationOfType:(id)arg1 usingNotificationPort:(id)arg2 error:(id *)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000601a
- (id)initWithServiceEntry:(unsigned int)arg1;	// IMP=0x0000000000006008

@end

