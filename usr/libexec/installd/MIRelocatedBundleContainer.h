//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MIRelocatedBundleContainer
{
}

- (_Bool)shouldHaveCorrespondingDataContainer;	// IMP=0x004000000003369c
- (unsigned long long)diskUsage;	// IMP=0x0010000000033621
- (_Bool)regenerateDirectoryUUIDWithError:(id *)arg1;	// IMP=0x00100000000335b1
- (_Bool)purgeContentWithError:(id *)arg1;	// IMP=0x0010000000033541
- (_Bool)makeContainerLiveReplacingContainer:(id)arg1 reason:(unsigned long long)arg2 waitForDeletion:(_Bool)arg3 withError:(id *)arg4;	// IMP=0x00100000000334d1
- (_Bool)makeContainerLiveWithError:(id *)arg1;	// IMP=0x0010000000033461

@end
