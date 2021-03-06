//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CADAccountAccessHandler-Protocol.h>

@class NSMutableArray;

@interface CADGroupedAccountAccessHandler : NSObject <CADAccountAccessHandler>
{
    NSMutableArray *_accessHandlers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000dbf5
@property(readonly, nonatomic) NSMutableArray *accessHandlers; // @synthesize accessHandlers=_accessHandlers;
- (void)reset;	// IMP=0x000000000000dabe
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;	// IMP=0x000000000000d8fa
- (_Bool)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2;	// IMP=0x000000000000d77d
- (_Bool)isAccountManaged:(id)arg1;	// IMP=0x000000000000d613
- (void)addAccountAccessHandler:(id)arg1;	// IMP=0x000000000000d5a1
- (id)init;	// IMP=0x000000000000d53b

@end

