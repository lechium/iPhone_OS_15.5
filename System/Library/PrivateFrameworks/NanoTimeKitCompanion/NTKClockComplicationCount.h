//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NTKClockComplicationCount : NSObject
{
    NSString *_applicationIdentifier;	// 8 = 0x8
    long long _countOnFace;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f804c
@property(readonly, nonatomic) long long countOnFace; // @synthesize countOnFace=_countOnFace;
@property(readonly, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f7fc2
- (unsigned long long)hash;	// IMP=0x00000000000f7fac
- (id)initWithApplicationIdentifier:(id)arg1 countOnFace:(long long)arg2;	// IMP=0x00000000000f7f36

@end

