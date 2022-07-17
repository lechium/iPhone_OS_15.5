//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class NSArray, NSError, NSSet, NSString;
@protocol CRKCancelable, CRKClassKitClass, CRKClassKitDataObserver, CRKClassKitPerson, CRKClassKitQuery;

@protocol CRKClassKitFacade <NSObject>
@property(readonly, nonatomic) long long accountState;
- (void)executeQuery:(id <CRKClassKitQuery>)arg1;
- (id <CRKClassKitQuery>)makeQueryForPersonsWithIdentifiers:(NSArray *)arg1;
- (id <CRKClassKitQuery>)makeInstructorQueryForSearchString:(NSString *)arg1 locationIDs:(NSArray *)arg2 sortingGivenNameFirst:(_Bool)arg3 pageSize:(long long)arg4;
- (id <CRKClassKitQuery>)makeStudentQueryForSearchString:(NSString *)arg1 locationIDs:(NSArray *)arg2 sortingGivenNameFirst:(_Bool)arg3 pageSize:(long long)arg4;
- (void)locationsWithObjectIDs:(NSSet *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)locationsWithManagePermissionsForUserWithObjectID:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (id <CRKClassKitDataObserver>)locationsObserverWithSortDescriptors:(NSArray *)arg1;
- (void)currentUserWithCompletion:(void (^)(id <CRKClassKitCurrentUser>, NSError *))arg1;
- (NSSet *)objectIDsOfInstructorsInClass:(id <CRKClassKitClass>)arg1;
- (void)removeInstructor:(id <CRKClassKitPerson>)arg1 fromClass:(id <CRKClassKitClass>)arg2;
- (void)addInstructor:(id <CRKClassKitPerson>)arg1 toClass:(id <CRKClassKitClass>)arg2;
- (NSSet *)objectIDsOfStudentsInClass:(id <CRKClassKitClass>)arg1;
- (void)removeStudent:(id <CRKClassKitPerson>)arg1 fromClass:(id <CRKClassKitClass>)arg2;
- (void)addStudent:(id <CRKClassKitPerson>)arg1 toClass:(id <CRKClassKitClass>)arg2;
- (id <CRKCancelable>)subscribeToClassMembershipChangeEvents:(void (^)(void))arg1;
- (id <CRKCancelable>)subscribeToCurrentUserDidChangeEvents:(void (^)(void))arg1;
- (id <CRKClassKitClass>)makeClassWithLocationID:(NSString *)arg1 name:(NSString *)arg2;
- (void)removeClass:(id <CRKClassKitClass>)arg1 completion:(void (^)(NSError *))arg2;
- (void)saveClass:(id <CRKClassKitClass>)arg1 completion:(void (^)(NSError *))arg2;
- (void)instructedClassesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)enrolledClassesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (id <CRKClassKitDataObserver>)classDataObserverWithSortDescriptors:(NSArray *)arg1;
- (id <CRKClassKitDataObserver>)personObserverWithPersonIDs:(NSSet *)arg1 sortDescriptors:(NSArray *)arg2;
- (void)studentsInClassWithObjectID:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)instructorsInClassWithObjectID:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)deregisterDataObserver:(id <CRKClassKitDataObserver>)arg1;
- (void)registerDataObserver:(id <CRKClassKitDataObserver>)arg1;
- (_Bool)ownsError:(NSError *)arg1;
@end
