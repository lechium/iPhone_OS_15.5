//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByParentReminderID <NSSecureCoding>
{
    _Bool _includeUnsupported;	// 8 = 0x8
    REMObjectID *_parentReminderID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005da76
- (void).cxx_destruct;	// IMP=0x000000000005de48
@property(readonly, nonatomic) _Bool includeUnsupported; // @synthesize includeUnsupported=_includeUnsupported;
@property(readonly, nonatomic) REMObjectID *parentReminderID; // @synthesize parentReminderID=_parentReminderID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005de1c
- (unsigned long long)hash;	// IMP=0x000000000005ddba
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005dc5a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005dbbd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005dafe
- (id)initWithParentReminderID:(id)arg1 includeUnsupported:(_Bool)arg2;	// IMP=0x000000000005da7e

@end

