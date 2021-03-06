//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;
@protocol HMDAccessorySymptomsDelegate;

@interface HMDSymptomContainer : NSObject
{
    NSString *_idsIdentifier;	// 8 = 0x8
    id <HMDAccessorySymptomsDelegate> _delegate;	// 16 = 0x10
    NSSet *_broadcastedSymptoms;	// 24 = 0x18
    NSSet *_localSymptoms;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000733cfc
@property(copy, nonatomic) NSSet *localSymptoms; // @synthesize localSymptoms=_localSymptoms;
@property(copy, nonatomic) NSSet *broadcastedSymptoms; // @synthesize broadcastedSymptoms=_broadcastedSymptoms;
@property(nonatomic) __weak id <HMDAccessorySymptomsDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
- (id)initWithIDSIdentifier:(id)arg1;	// IMP=0x0000000000733c1d

@end

